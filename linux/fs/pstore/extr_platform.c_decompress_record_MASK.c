
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pstore_record {int compressed; scalar_t__ type; char* buf; int size; scalar_t__ ecc_notice_size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,char*,int*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (scalar_t__,int ) ;
 char* FUNC_3 (char*,scalar_t__,int ) ;
 int FUNC_4 (char*,char*,scalar_t__) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*,...) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_7(struct pstore_record *VAR_5)
{
 int VAR_6;
 int VAR_7;
 char *VAR_8, *VAR_9;

 if (!VAR_5->compressed)
  return;


 if (VAR_5->type != VAR_1) {
  FUNC_6("ignored compressed record type %d\n", VAR_5->type);
  return;
 }


 if (!VAR_2) {
  FUNC_6("no decompression method initialized!\n");
  return;
 }


 VAR_7 = VAR_3;
 VAR_9 = FUNC_2(VAR_7 + VAR_5->ecc_notice_size,
       VAR_0);
 if (!VAR_9)
  return;


 VAR_6 = FUNC_0(VAR_4, VAR_5->buf, VAR_5->size,
       VAR_9, &VAR_7);
 if (VAR_6) {
  FUNC_5("crypto_comp_decompress failed, ret = %d!\n", VAR_6);
  FUNC_1(VAR_9);
  return;
 }


 FUNC_4(VAR_9 + VAR_7, VAR_5->buf + VAR_5->size,
        VAR_5->ecc_notice_size);


 VAR_8 = FUNC_3(VAR_9, VAR_7 + VAR_5->ecc_notice_size,
      VAR_0);
 FUNC_1(VAR_9);
 if (!VAR_8)
  return;


 FUNC_1(VAR_5->buf);
 VAR_5->buf = VAR_8;
 VAR_5->size = VAR_7;
 VAR_5->compressed = 0;
}
