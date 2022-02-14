
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int code; scalar_t__ dout_width; scalar_t__ dout_word_include; scalar_t__ din_width; scalar_t__ din_word_include; } ;
struct xsdfec_dev {TYPE_1__ config; struct device* dev; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;



 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device_node*,char*,char const**) ;
 int FUNC_1 (struct device_node*,char*,scalar_t__*) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (struct xsdfec_dev*) ;
 int FUNC_4 (struct xsdfec_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct xsdfec_dev *VAR_5)
{
 struct device *VAR_6 = VAR_5->dev;
 struct device_node *VAR_7 = VAR_6->of_node;
 int VAR_8;
 const char *VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13;

 VAR_8 = FUNC_0(VAR_7, "xlnx,sdfec-code", &VAR_9);
 if (VAR_8 < 0)
  return VAR_8;

 if (!FUNC_2(VAR_9, "ldpc"))
  VAR_5->config.code = VAR_3;
 else if (!FUNC_2(VAR_9, "turbo"))
  VAR_5->config.code = VAR_4;
 else
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_7, "xlnx,sdfec-din-words",
        &VAR_11);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_11 < VAR_1)
  VAR_5->config.din_word_include = VAR_11;
 else
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_7, "xlnx,sdfec-din-width", &VAR_10);
 if (VAR_8 < 0)
  return VAR_8;

 switch (VAR_10) {

 case 130:
 case 129:
 case 128:
  VAR_5->config.din_width = VAR_10;
  break;
 default:
  return -VAR_0;
 }

 VAR_8 = FUNC_1(VAR_7, "xlnx,sdfec-dout-words",
        &VAR_13);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_13 < VAR_1)
  VAR_5->config.dout_word_include = VAR_13;
 else
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_7, "xlnx,sdfec-dout-width", &VAR_12);
 if (VAR_8 < 0)
  return VAR_8;

 switch (VAR_12) {

 case 130:
 case 129:
 case 128:
  VAR_5->config.dout_width = VAR_12;
  break;
 default:
  return -VAR_0;
 }


 FUNC_4(VAR_5, VAR_2, VAR_5->config.code);

 FUNC_3(VAR_5);

 return 0;
}
