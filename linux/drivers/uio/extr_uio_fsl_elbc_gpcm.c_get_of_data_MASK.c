
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct resource {int dummy; } ;
struct fsl_elbc_gpcm {char* name; int dev; int bank; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fsl_elbc_gpcm*,struct resource*,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 unsigned int FUNC_2 (struct device_node*,int ) ;
 char* FUNC_3 (char const*,int ) ;
 int FUNC_4 (struct device_node*,int ,struct resource*) ;
 scalar_t__ FUNC_5 (struct device_node*,char*,char const**) ;
 int FUNC_6 (struct device_node*,char*,int *) ;
 int FUNC_7 (struct fsl_elbc_gpcm*,char const*) ;

__attribute__((used)) static int FUNC_8(struct fsl_elbc_gpcm *VAR_2, struct device_node *VAR_3,
         struct resource *VAR_4, u32 *VAR_5,
         u32 *VAR_6, unsigned int *VAR_7, char **VAR_8)
{
 const char *VAR_9;
 const char *VAR_10;
 int VAR_11;


 VAR_11 = FUNC_4(VAR_3, 0, VAR_4);
 if (VAR_11) {
  FUNC_1(VAR_2->dev, "failed to get resource\n");
  return VAR_11;
 }


 VAR_11 = FUNC_6(VAR_3, "reg", &VAR_2->bank);
 if (VAR_11) {
  FUNC_1(VAR_2->dev, "failed to get bank number\n");
  return VAR_11;
 }


 VAR_11 = FUNC_6(VAR_3, "elbc-gpcm-br", VAR_5);
 if (VAR_11) {
  FUNC_1(VAR_2->dev, "missing elbc-gpcm-br value\n");
  return VAR_11;
 }


 VAR_11 = FUNC_6(VAR_3, "elbc-gpcm-or", VAR_6);
 if (VAR_11) {
  FUNC_1(VAR_2->dev, "missing elbc-gpcm-or value\n");
  return VAR_11;
 }


 VAR_2->name = "generic";
 if (FUNC_5(VAR_3, "device_type", &VAR_10) == 0)
  FUNC_7(VAR_2, VAR_10);


 *VAR_7 = FUNC_2(VAR_3, 0);


 VAR_11 = FUNC_0(VAR_2, VAR_4, *VAR_5, *VAR_6);
 if (VAR_11)
  return VAR_11;


 if (FUNC_5(VAR_3, "uio_name", &VAR_9) != 0)
  VAR_9 = "eLBC_GPCM";
 *VAR_8 = FUNC_3(VAR_9, VAR_1);
 if (!*VAR_8)
  return -VAR_0;

 return 0;
}
