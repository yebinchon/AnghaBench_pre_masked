
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct idt_ntb_dev {int mtbl_lock; TYPE_1__* peers; } ;
struct TYPE_4__ {int ntctl; int pcicmdsts; int sts; } ;
struct TYPE_3__ {unsigned char port; int part; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct idt_ntb_dev*,int ) ;
 int FUNC_1 (struct idt_ntb_dev*,int ,int ) ;
 int FUNC_2 (struct idt_ntb_dev*,int ) ;
 TYPE_2__* VAR_6 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_5(struct idt_ntb_dev *VAR_7, int VAR_8)
{
 unsigned long VAR_9;
 unsigned char VAR_10;
 u32 VAR_11;


 VAR_10 = VAR_7->peers[VAR_8].port;


 VAR_11 = FUNC_2(VAR_7, VAR_6[VAR_10].sts);
 if (!(VAR_11 & VAR_5))
  return 0;


 VAR_11 = FUNC_2(VAR_7, VAR_6[VAR_10].pcicmdsts);
 if (!(VAR_11 & VAR_4))
  return 0;


 VAR_11 = FUNC_2(VAR_7, VAR_6[VAR_10].ntctl);
 if (!(VAR_11 & VAR_0))
  return 0;


 FUNC_3(&VAR_7->mtbl_lock, VAR_9);
 FUNC_1(VAR_7, VAR_2, VAR_7->peers[VAR_8].part);
 VAR_11 = FUNC_0(VAR_7, VAR_3);
 FUNC_4(&VAR_7->mtbl_lock, VAR_9);

 return !!(VAR_11 & VAR_1);
}
