
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct qed_dev {TYPE_1__* pdev; } ;
struct firmware {int size; int * data; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct qed_dev*,char*,...) ;
 int FUNC_1 (struct qed_dev*,int ,char*,char const*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;




 scalar_t__ FUNC_2 (struct qed_dev*,int *) ;
 int FUNC_3 (struct qed_dev*,int const**) ;
 int FUNC_4 (struct qed_dev*,int const**,int*) ;
 int FUNC_5 (struct qed_dev*,int const**,int*) ;
 int FUNC_6 (struct qed_dev*,int const**,int*) ;
 int FUNC_7 (struct qed_dev*,struct firmware const*,int const**) ;
 int FUNC_8 (struct firmware const*) ;
 int FUNC_9 (struct firmware const**,char const*,int *) ;

__attribute__((used)) static int FUNC_10(struct qed_dev *VAR_3, const char *VAR_4)
{
 const struct firmware *VAR_5;
 const u8 *VAR_6, *VAR_7;
 u32 VAR_8;
 int VAR_9;

 VAR_9 = FUNC_9(&VAR_5, VAR_4, &VAR_3->pdev->dev);
 if (VAR_9) {
  FUNC_0(VAR_3, "Failed to find '%s'\n", VAR_4);
  return VAR_9;
 }

 FUNC_1(VAR_3, VAR_2,
     "Flashing '%s' - firmware's data at %p, size is %08x\n",
     VAR_4, VAR_5->data, (u32)VAR_5->size);
 VAR_6 = VAR_5->data;
 VAR_7 = VAR_6 + VAR_5->size;

 VAR_9 = FUNC_7(VAR_3, VAR_5, &VAR_6);
 if (VAR_9)
  goto exit;

 while (VAR_6 < VAR_7) {
  bool VAR_10 = 0;


  VAR_8 = *((u32 *)VAR_6);
  switch (VAR_8) {
  case 131:
   VAR_9 = FUNC_5(VAR_3, &VAR_6,
          &VAR_10);
   break;
  case 130:
   VAR_9 = FUNC_6(VAR_3, &VAR_6,
           &VAR_10);
   break;
  case 128:
   VAR_9 = FUNC_4(VAR_3, &VAR_6,
       &VAR_10);
   break;
  case 129:
   VAR_9 = FUNC_3(VAR_3, &VAR_6);
   break;
  default:
   FUNC_0(VAR_3, "Unknown command %08x\n", VAR_8);
   VAR_9 = -VAR_0;
   goto exit;
  }

  if (VAR_9) {
   FUNC_0(VAR_3, "Command %08x failed\n", VAR_8);
   goto exit;
  }


  if (VAR_10) {
   u32 VAR_11 = 0;

   if (FUNC_2(VAR_3, (u8 *)&VAR_11)) {
    FUNC_0(VAR_3, "Failed getting MCP response\n");
    VAR_9 = -VAR_0;
    goto exit;
   }

   switch (VAR_11 & VAR_1) {
   case 133:
   case 135:
   case 134:
   case 132:
    break;
   default:
    FUNC_0(VAR_3, "MFW returns error: %08x\n",
           VAR_11);
    VAR_9 = -VAR_0;
    goto exit;
   }
  }
 }

exit:
 FUNC_8(VAR_5);

 return VAR_9;
}
