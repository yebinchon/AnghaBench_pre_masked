
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_pix_format {int ycbcr_enc; int colorspace; int quantization; int xfer_func; } ;
struct rvin_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct rvin_dev*,struct v4l2_pix_format*) ;

__attribute__((used)) static void FUNC_4(struct rvin_dev *VAR_1,
          struct v4l2_pix_format *VAR_2)
{






 VAR_2->colorspace = VAR_0;
 VAR_2->xfer_func = FUNC_1(VAR_2->colorspace);
 VAR_2->ycbcr_enc = FUNC_2(VAR_2->colorspace);
 VAR_2->quantization = FUNC_0(1, VAR_2->colorspace,
         VAR_2->ycbcr_enc);

 FUNC_3(VAR_1, VAR_2);
}
