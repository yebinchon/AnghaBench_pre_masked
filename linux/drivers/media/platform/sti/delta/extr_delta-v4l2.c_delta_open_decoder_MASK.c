
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct delta_dev {int instance_id; int dev; } ;
struct delta_dec {int name; } ;
struct TYPE_2__ {int pixelformat; } ;
struct delta_ctx {int name; TYPE_1__ frameinfo; struct delta_dev* dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct delta_dec const*,int ,struct delta_ctx*) ;
 struct delta_dec* FUNC_1 (struct delta_ctx*,int ,int ) ;
 int FUNC_2 (int ,char*,int ,char*,...) ;
 int FUNC_3 (int ,char*,int ,...) ;
 int VAR_1 ;
 int FUNC_4 (int ,int,char*,int,char*) ;

__attribute__((used)) static int FUNC_5(struct delta_ctx *VAR_2, u32 VAR_3,
         u32 VAR_4, const struct delta_dec **VAR_5)
{
 struct delta_dev *VAR_6 = VAR_2->dev;
 const struct delta_dec *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_2->frameinfo.pixelformat);
 if (!VAR_7) {
  FUNC_3(VAR_6->dev, "%s no decoder found matching %4.4s => %4.4s\n",
   VAR_2->name, (char *)&VAR_3, (char *)&VAR_4);
  return -VAR_0;
 }

 FUNC_2(VAR_6->dev, "%s one decoder matching %4.4s => %4.4s\n",
  VAR_2->name, (char *)&VAR_3, (char *)&VAR_4);


 FUNC_4(VAR_2->name, sizeof(VAR_2->name), "[%3d:%4.4s]",
   VAR_6->instance_id, (char *)&VAR_3);


 VAR_8 = FUNC_0(VAR_7, VAR_1, VAR_2);
 if (VAR_8) {
  FUNC_3(VAR_6->dev, "%s failed to open decoder instance (%d)\n",
   VAR_2->name, VAR_8);
  return VAR_8;
 }

 FUNC_2(VAR_6->dev, "%s %s decoder opened\n", VAR_2->name, VAR_7->name);

 *VAR_5 = VAR_7;

 return VAR_8;
}
