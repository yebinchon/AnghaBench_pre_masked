
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xsdfec_config {int din_width; int din_word_include; int dout_width; int dout_word_include; } ;
struct xsdfec_dev {struct xsdfec_config config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct xsdfec_dev*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct xsdfec_dev *VAR_5)
{
 u32 VAR_6;
 u32 VAR_7;
 u32 VAR_8;
 u32 VAR_9;
 u32 VAR_10;
 struct xsdfec_config *VAR_11 = &VAR_5->config;


 VAR_7 =
  FUNC_2(VAR_11->dout_word_include);
 VAR_8 =
  FUNC_1(VAR_11->dout_width);
 VAR_9 =
  FUNC_2(VAR_11->din_word_include);
 VAR_10 =
  FUNC_1(VAR_11->din_width);

 VAR_6 = VAR_7 << VAR_3;
 VAR_6 |= VAR_8 << VAR_2;
 VAR_6 |= VAR_9 << VAR_1;
 VAR_6 |= VAR_10 << VAR_0;

 FUNC_0(VAR_5, VAR_4, VAR_6);

 return 0;
}
