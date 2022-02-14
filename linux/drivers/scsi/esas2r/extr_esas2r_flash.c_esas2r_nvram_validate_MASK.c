
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esas2r_sas_nvram {char* signature; scalar_t__ version; } ;
struct esas2r_adapter {int flags; struct esas2r_sas_nvram* nvram; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct esas2r_adapter*) ;
 scalar_t__ FUNC_2 (struct esas2r_sas_nvram*) ;
 int FUNC_3 (int ,int *) ;

bool FUNC_4(struct esas2r_adapter *VAR_2)
{
 struct esas2r_sas_nvram *VAR_3 = VAR_2->nvram;
 bool VAR_4 = 0;

 if (VAR_3->signature[0] != 'E'
     || VAR_3->signature[1] != 'S'
     || VAR_3->signature[2] != 'A'
     || VAR_3->signature[3] != 'S') {
  FUNC_0("invalid NVRAM signature");
 } else if (FUNC_2(VAR_3)) {
  FUNC_0("invalid NVRAM checksum");
 } else if (VAR_3->version > VAR_1) {
  FUNC_0("invalid NVRAM version");
 } else {
  FUNC_3(VAR_0, &VAR_2->flags);
  VAR_4 = 1;
 }

 if (VAR_4 == 0) {
  FUNC_0("using defaults");
  FUNC_1(VAR_2);
 }

 return VAR_4;
}
