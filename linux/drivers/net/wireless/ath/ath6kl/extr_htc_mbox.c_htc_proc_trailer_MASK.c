
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct htc_target {int dummy; } ;
struct htc_record_hdr {int len; int rec_id; } ;
typedef enum htc_endpoint_id { ____Placeholder_htc_endpoint_id } htc_endpoint_id ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,char*,int *,int) ;
 int FUNC_2 (char*,int,int ,int) ;
 int FUNC_3 (struct htc_target*,struct htc_record_hdr*,int *,int *,int,int*) ;

__attribute__((used)) static int FUNC_4(struct htc_target *VAR_2,
       u8 *VAR_3, int VAR_4, u32 *VAR_5,
       int *VAR_6, enum htc_endpoint_id VAR_7)
{
 struct htc_record_hdr *VAR_8;
 int VAR_9;
 int VAR_10;
 u8 *VAR_11;
 u8 *VAR_12;

 FUNC_0(VAR_0, "htc rx trailer len %d\n", VAR_4);
 FUNC_1(VAR_0, ((void*)0), "", VAR_3, VAR_4);

 VAR_12 = VAR_3;
 VAR_9 = VAR_4;
 VAR_10 = 0;

 while (VAR_4 > 0) {
  if (VAR_4 < sizeof(struct htc_record_hdr)) {
   VAR_10 = -VAR_1;
   break;
  }

  VAR_8 = (struct htc_record_hdr *) VAR_3;
  VAR_4 -= sizeof(struct htc_record_hdr);
  VAR_3 += sizeof(struct htc_record_hdr);

  if (VAR_8->len > VAR_4) {
   FUNC_2("invalid record len: %d (id:%d) buf has: %d bytes left\n",
       VAR_8->len, VAR_8->rec_id, VAR_4);
   VAR_10 = -VAR_1;
   break;
  }
  VAR_11 = VAR_3;

  VAR_10 = FUNC_3(VAR_2, VAR_8, VAR_11,
        VAR_5, VAR_7, VAR_6);

  if (VAR_10)
   break;


  VAR_3 += VAR_8->len;
  VAR_4 -= VAR_8->len;
 }

 if (VAR_10)
  FUNC_1(VAR_0, "htc rx bad trailer",
    "", VAR_12, VAR_9);

 return VAR_10;
}
