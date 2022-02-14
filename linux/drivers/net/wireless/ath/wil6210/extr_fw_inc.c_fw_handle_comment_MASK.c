
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wil_fw_record_comment_hdr {int magic; } ;
struct wil6210_priv {int dummy; } ;


 int VAR_0 ;



 int FUNC_0 (struct wil6210_priv*,void const*,size_t) ;
 int FUNC_1 (struct wil6210_priv*,void const*,size_t) ;
 int FUNC_2 (struct wil6210_priv*,void const*,size_t) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct wil6210_priv*,char*) ;
 int FUNC_5 (char*,int ,int,int,void const*,size_t,int) ;

__attribute__((used)) static int
FUNC_6(struct wil6210_priv *VAR_1, const void *VAR_2,
    size_t VAR_3)
{
 const struct wil_fw_record_comment_hdr *VAR_4 = VAR_2;
 u32 VAR_5;
 int VAR_6 = 0;

 if (VAR_3 < sizeof(*VAR_4))
  return 0;

 VAR_5 = FUNC_3(VAR_4->magic);

 switch (VAR_5) {
 case 129:
  FUNC_4(VAR_1, "magic is WIL_FW_CAPABILITIES_MAGIC\n");
  VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3);
  break;
 case 130:
  FUNC_4(VAR_1, "magic is WIL_BRD_FILE_MAGIC\n");
  VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3);
  break;
 case 128:
  FUNC_4(VAR_1, "magic is WIL_FW_CONCURRENCY_MAGIC\n");
  VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3);
  break;
 default:
  FUNC_5("", VAR_0, 16, 1,
    VAR_2, VAR_3, 1);
 }

 return VAR_6;
}
