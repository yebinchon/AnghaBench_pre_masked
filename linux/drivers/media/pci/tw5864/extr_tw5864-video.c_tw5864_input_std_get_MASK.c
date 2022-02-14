
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tw5864_input {int nr; struct tw5864_dev* root; } ;
struct tw5864_dev {TYPE_1__* pci; } ;
typedef enum tw5864_vid_std { ____Placeholder_tw5864_vid_std } tw5864_vid_std ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct tw5864_input *VAR_1,
    enum tw5864_vid_std *VAR_2)
{
 struct tw5864_dev *VAR_3 = VAR_1->root;
 u8 VAR_4 = FUNC_2(FUNC_0(VAR_1->nr));

 *VAR_2 = (VAR_4 & 0x70) >> 4;

 if (VAR_4 & 0x80) {
  FUNC_1(&VAR_3->pci->dev,
   "Video format detection is in progress, please wait\n");
  return -VAR_0;
 }

 return 0;
}
