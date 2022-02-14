
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct nvdimm {int dimm_id; struct device dev; } ;
struct key {int sem; } ;
struct encrypted_key_payload {scalar_t__ decrypted_datalen; } ;
typedef int NVDIMM_PREFIX ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct key*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct key*) ;
 struct encrypted_key_payload* FUNC_2 (struct key*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct key*) ;
 int VAR_3 ;
 struct key* FUNC_6 (int *,char*,char*) ;
 int FUNC_7 (char*,char*,char const*,int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static struct key *FUNC_9(struct nvdimm *VAR_4)
{
 struct key *VAR_5 = ((void*)0);
 static const char VAR_6[] = "nvdimm:";
 char VAR_7[VAR_1 + sizeof(VAR_6)];
 struct device *VAR_8 = &VAR_4->dev;

 FUNC_7(VAR_7, "%s%s", VAR_6, VAR_4->dimm_id);
 VAR_5 = FUNC_6(&VAR_3, VAR_7, "");
 if (FUNC_0(VAR_5)) {
  if (FUNC_1(VAR_5) == -VAR_0)
   FUNC_3(VAR_8, "request_key() found no key\n");
  else
   FUNC_3(VAR_8, "request_key() upcall failed\n");
  VAR_5 = ((void*)0);
 } else {
  struct encrypted_key_payload *VAR_9;

  FUNC_4(&VAR_5->sem);
  VAR_9 = FUNC_2(VAR_5);
  if (VAR_9->decrypted_datalen != VAR_2) {
   FUNC_8(&VAR_5->sem);
   FUNC_5(VAR_5);
   VAR_5 = ((void*)0);
  }
 }

 return VAR_5;
}
