
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i1480 {int dev; } ;
struct fw_hdr {int dummy; } ;
struct firmware {int size; int data; } ;


 int FUNC_0 (int ,char*,char const*,char const*,int) ;
 int FUNC_1 (int ,char*,char const*,char const*) ;
 int FUNC_2 (struct fw_hdr*) ;
 int FUNC_3 (struct i1480*,struct fw_hdr**,int ,int ) ;
 int FUNC_4 (struct i1480*,struct fw_hdr*,char const*,char const*) ;
 int FUNC_5 (struct i1480*) ;
 int FUNC_6 (struct i1480*) ;
 int FUNC_7 (struct firmware const*) ;
 int FUNC_8 (struct firmware const**,char const*,int ) ;

__attribute__((used)) static
int FUNC_9(struct i1480 *VAR_0, const char *VAR_1,
      const char *VAR_2)
{
 int VAR_3;
 const struct firmware *VAR_4;
 struct fw_hdr *VAR_5;

 VAR_3 = FUNC_8(&VAR_4, VAR_1, VAR_0->dev);
 if (VAR_3 < 0)
  goto out;
 VAR_3 = FUNC_3(VAR_0, &VAR_5, VAR_4->data, VAR_4->size);
 if (VAR_3 < 0) {
  FUNC_0(VAR_0->dev, "%s fw '%s': failed to parse firmware "
   "file: %d\n", VAR_2, VAR_1, VAR_3);
  goto out_release;
 }
 VAR_3 = FUNC_6(VAR_0);
 if (VAR_3 < 0)
  goto out_hdrs_release;
 VAR_3 = FUNC_4(VAR_0, VAR_5, VAR_1, VAR_2);
 FUNC_5(VAR_0);
out_hdrs_release:
 if (VAR_3 >= 0)
  FUNC_1(VAR_0->dev, "%s fw '%s': uploaded\n", VAR_2, VAR_1);
 else
  FUNC_0(VAR_0->dev, "%s fw '%s': failed to upload (%d), "
   "power cycle device\n", VAR_2, VAR_1, VAR_3);
 FUNC_2(VAR_5);
out_release:
 FUNC_7(VAR_4);
out:
 return VAR_3;
}
