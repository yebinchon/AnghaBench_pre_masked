
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imx_media_pixfmt {int dummy; } ;
typedef enum codespace_sel { ____Placeholder_codespace_sel } codespace_sel ;





 int VAR_0 ;
 int VAR_1 ;
 struct imx_media_pixfmt const* FUNC_0 (int ,int ,int,int,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static const struct imx_media_pixfmt *FUNC_1(u32 VAR_4,
        u32 VAR_5,
        enum codespace_sel VAR_6,
        bool VAR_7,
        bool VAR_8)
{
 const struct imx_media_pixfmt *VAR_9;

 switch (VAR_6) {
 case 128:
  return FUNC_0(VAR_4, VAR_5, VAR_7, VAR_8,
         VAR_3, VAR_1);
 case 129:
  return FUNC_0(VAR_4, VAR_5, VAR_7, VAR_8,
         VAR_2, VAR_0);
 case 130:
  VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_7, VAR_8,
        VAR_3, VAR_1);
  if (VAR_9)
   return VAR_9;
  return FUNC_0(VAR_4, VAR_5, VAR_7, VAR_8,
         VAR_2, VAR_0);
 default:
  return ((void*)0);
 }
}
