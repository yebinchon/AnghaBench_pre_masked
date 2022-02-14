
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct soc_device_attribute {char* family; void* soc_id; void* revision; int machine; } ;
struct soc_device {int dummy; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct soc_device*) ;
 int FUNC_1 (struct soc_device*) ;
 int VAR_3 ;
 int FUNC_2 (int ,int *) ;
 struct soc_device_attribute* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 void* FUNC_6 (int ,char*,int,...) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (int ,char*,int *) ;
 int VAR_4 ;
 struct soc_device* FUNC_9 (struct soc_device_attribute*) ;
 int FUNC_10 (struct soc_device*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_6)
{
 struct soc_device_attribute *VAR_7;
 struct soc_device *VAR_8;
 int VAR_9, VAR_10;
 u32 VAR_11;

 VAR_10 = FUNC_4(&VAR_5);
 if (VAR_10)
  return VAR_10;

 VAR_7 = FUNC_3(&VAR_6->dev, sizeof(*VAR_7),
        VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->family = "Freescale i.MX";

 VAR_10 = FUNC_8(VAR_4,
          "model",
          &VAR_7->machine);
 if (VAR_10)
  return VAR_10;

 VAR_9 = FUNC_5();
 if (VAR_9 < 0)
  return -VAR_0;


 VAR_11 = VAR_9 & 0x1f;
 VAR_7->soc_id = FUNC_6(VAR_2, "0x%x", VAR_11);
 if (!VAR_7->soc_id)
  return -VAR_1;


 VAR_11 = (VAR_9 >> 5) & 0xf;
 VAR_11 = (((VAR_11 >> 2) + 1) << 4) | (VAR_11 & 0x3);
 VAR_7->revision = FUNC_6(VAR_2,
        "%d.%d",
        (VAR_11 >> 4) & 0xf,
        VAR_11 & 0xf);
 if (!VAR_7->revision) {
  VAR_10 = -VAR_1;
  goto free_soc_id;
 }

 VAR_8 = FUNC_9(VAR_7);
 if (FUNC_0(VAR_8)) {
  VAR_10 = FUNC_1(VAR_8);
  goto free_revision;
 }

 VAR_10 = FUNC_2(FUNC_10(VAR_8),
     &VAR_3);
 if (VAR_10)
  goto free_revision;

 return 0;

free_revision:
 FUNC_7(VAR_7->revision);
free_soc_id:
 FUNC_7(VAR_7->soc_id);
 return VAR_10;
}
