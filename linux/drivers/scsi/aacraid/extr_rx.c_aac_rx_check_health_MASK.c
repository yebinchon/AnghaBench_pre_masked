
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct aac_dev {TYPE_1__* pdev; } ;
typedef int dma_addr_t ;
typedef void* __le32 ;
struct TYPE_4__ {int * IMRx; int * OMRx; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int *,int,int *,int ) ;
 int FUNC_2 (int *,int,...) ;
 int FUNC_3 (char) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (struct aac_dev*,int ) ;
 int FUNC_7 (struct aac_dev*,int ,int ,int ,int ,int ,int ,int ,int *,int *,int *,int *,int *) ;
 int FUNC_8 (struct aac_dev*,int ,int ) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct aac_dev *VAR_6)
{
 u32 VAR_7 = FUNC_6(VAR_6, VAR_4.OMRx[0]);




 if (FUNC_9(VAR_7 & VAR_5))
  return -1;



 if (FUNC_9(VAR_7 & VAR_2)) {
  char * VAR_8;
  struct POSTSTATUS {
   __le32 Post_Command;
   __le32 Post_Address;
  } * VAR_9;
  dma_addr_t VAR_10, VAR_11;
  int VAR_12;

  if (FUNC_4((VAR_7 & 0xFF000000L) == 0xBC000000L))
   return (VAR_7 >> 16) & 0xFF;
  VAR_8 = FUNC_1(&VAR_6->pdev->dev, 512, &VAR_11,
         VAR_1);
  VAR_12 = -2;
  if (FUNC_9(VAR_8 == ((void*)0)))
   return VAR_12;
  VAR_9 = FUNC_1(&VAR_6->pdev->dev,
       sizeof(struct POSTSTATUS), &VAR_10,
       VAR_1);
  if (FUNC_9(VAR_9 == ((void*)0))) {
   FUNC_2(&VAR_6->pdev->dev, 512, VAR_8, VAR_11);
   return VAR_12;
  }
  FUNC_5(VAR_8, 0, 512);
  VAR_9->Post_Command = FUNC_0(VAR_0);
  VAR_9->Post_Address = FUNC_0(VAR_11);
  FUNC_8(VAR_6, VAR_4.IMRx[0], VAR_10);
  FUNC_7(VAR_6, VAR_0, VAR_11, 0, 0, 0, 0, 0,
    ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0));
  FUNC_2(&VAR_6->pdev->dev, sizeof(struct POSTSTATUS),
      VAR_9, VAR_10);
  if (FUNC_4((VAR_8[0] == '0') && ((VAR_8[1] == 'x') || (VAR_8[1] == 'X')))) {
   VAR_12 = (FUNC_3(VAR_8[2]) << 4) +
    FUNC_3(VAR_8[3]);
  }
  FUNC_2(&VAR_6->pdev->dev, 512, VAR_8, VAR_11);
  return VAR_12;
 }



 if (FUNC_9(!(VAR_7 & VAR_3)))
  return -3;



 return 0;
}
