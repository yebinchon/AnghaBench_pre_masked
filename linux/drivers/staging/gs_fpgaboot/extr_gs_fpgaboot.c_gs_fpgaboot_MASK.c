
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpgaimage {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fpgaimage*,int ) ;
 int FUNC_1 (struct fpgaimage*,int ) ;
 int FUNC_2 (struct fpgaimage*) ;
 int FUNC_3 (struct fpgaimage*) ;
 int FUNC_4 (struct fpgaimage*) ;
 int FUNC_5 (struct fpgaimage*) ;
 struct fpgaimage* FUNC_6 (int,int ) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(void)
{
 int VAR_4;
 struct fpgaimage *VAR_5;

 VAR_5 = FUNC_6(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_5, VAR_3);
 if (VAR_4) {
  FUNC_7("gs_load_image error\n");
  goto err_out1;
 }

 VAR_4 = FUNC_2(VAR_5);
 if (VAR_4) {
  FUNC_7("gs_read_image error\n");
  goto err_out2;
 }

 VAR_4 = FUNC_4(VAR_5);
 if (VAR_4) {
  FUNC_7("gs_set_download_method error\n");
  goto err_out2;
 }

 VAR_4 = FUNC_0(VAR_5, VAR_2);
 if (VAR_4) {
  FUNC_7("gs_download_image error\n");
  goto err_out2;
 }

 VAR_4 = FUNC_3(VAR_5);
 if (VAR_4) {
  FUNC_7("gs_release_image error\n");
  goto err_out1;
 }

 FUNC_5(VAR_5);
 return 0;

err_out2:
 VAR_4 = FUNC_3(VAR_5);
 if (VAR_4)
  FUNC_7("gs_release_image error\n");
err_out1:
 FUNC_5(VAR_5);

 return VAR_4;
}
