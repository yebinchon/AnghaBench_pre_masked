
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct trx_header_le {scalar_t__ magic; int * offsets; int flag_version; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(const u8 *VAR_4)
{
 struct trx_header_le *VAR_5;
 int VAR_6 = -1;

 FUNC_0(VAR_3, "Enter\n");

 VAR_5 = (struct trx_header_le *) VAR_4;
 if (VAR_5->magic != FUNC_1(VAR_0))
  return -1;

 VAR_4 += sizeof(struct trx_header_le);

 if (FUNC_2(VAR_5->flag_version) & VAR_2) {
  VAR_6 = FUNC_2(VAR_5->offsets[VAR_1]);
  return VAR_6 + sizeof(struct trx_header_le);
 }
 return -1;
}
