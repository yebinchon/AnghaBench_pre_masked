
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct niu_parent {scalar_t__ plat_type; int* rxchan_per_port; int* txchan_per_port; } ;
struct niu_ldg {int ldg_num; int timer; struct niu* np; int napi; int irq; } ;
struct niu {int num_ldg; int port; struct niu_parent* parent; TYPE_1__* dev; struct niu_ldg* ldg; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (TYPE_1__*,int *,int ,int) ;
 int FUNC_4 (struct niu*,struct niu_parent*,int,int ) ;
 int FUNC_5 (struct niu*,int*) ;
 int VAR_4 ;
 int FUNC_6 (struct niu*,int,int,int) ;
 int FUNC_7 (struct niu*,int*) ;

__attribute__((used)) static int FUNC_8(struct niu *VAR_5)
{
 struct niu_parent *VAR_6 = VAR_5->parent;
 u8 VAR_7[VAR_2];
 int VAR_8, VAR_9;
 int VAR_10, VAR_11, VAR_12;
 u8 VAR_13;

 VAR_5->num_ldg = 1;
 VAR_5->ldg[0].irq = VAR_5->dev->irq;
 if (VAR_6->plat_type == VAR_3) {
  VAR_11 = FUNC_5(VAR_5, VAR_7);
  if (VAR_11)
   return VAR_11;
 } else
  FUNC_7(VAR_5, VAR_7);

 VAR_13 = VAR_5->port;
 for (VAR_10 = 0; VAR_10 < VAR_5->num_ldg; VAR_10++) {
  struct niu_ldg *VAR_14 = &VAR_5->ldg[VAR_10];

  FUNC_3(VAR_5->dev, &VAR_14->napi, VAR_4, 64);

  VAR_14->np = VAR_5;
  VAR_14->ldg_num = VAR_7[VAR_10];
  VAR_14->timer = 2;





  if (VAR_5->parent->plat_type != VAR_3) {
   VAR_11 = FUNC_6(VAR_5, VAR_14->ldg_num, VAR_13, VAR_10);
   if (VAR_11)
    return VAR_11;
  }
 }
 VAR_12 = 0;

 VAR_11 = FUNC_4(VAR_5, VAR_6, VAR_7[VAR_12],
      FUNC_0(VAR_13));
 if (VAR_11)
  return VAR_11;

 VAR_12++;
 if (VAR_12 == VAR_5->num_ldg)
  VAR_12 = 0;

 if (VAR_13 == 0) {
  VAR_11 = FUNC_4(VAR_5, VAR_6,
      VAR_7[VAR_12],
      VAR_1);
  if (VAR_11)
   return VAR_11;

  VAR_12++;
  if (VAR_12 == VAR_5->num_ldg)
   VAR_12 = 0;

  VAR_11 = FUNC_4(VAR_5, VAR_6,
      VAR_7[VAR_12],
      VAR_0);
  if (VAR_11)
   return VAR_11;

  VAR_12++;
  if (VAR_12 == VAR_5->num_ldg)
   VAR_12 = 0;

 }

 VAR_8 = 0;
 for (VAR_10 = 0; VAR_10 < VAR_13; VAR_10++)
  VAR_8 += VAR_6->rxchan_per_port[VAR_10];
 VAR_9 = VAR_6->rxchan_per_port[VAR_13];

 for (VAR_10 = VAR_8; VAR_10 < (VAR_8 + VAR_9); VAR_10++) {
  VAR_11 = FUNC_4(VAR_5, VAR_6,
      VAR_7[VAR_12],
      FUNC_1(VAR_10));
  if (VAR_11)
   return VAR_11;
  VAR_12++;
  if (VAR_12 == VAR_5->num_ldg)
   VAR_12 = 0;
 }

 VAR_8 = 0;
 for (VAR_10 = 0; VAR_10 < VAR_13; VAR_10++)
  VAR_8 += VAR_6->txchan_per_port[VAR_10];
 VAR_9 = VAR_6->txchan_per_port[VAR_13];
 for (VAR_10 = VAR_8; VAR_10 < (VAR_8 + VAR_9); VAR_10++) {
  VAR_11 = FUNC_4(VAR_5, VAR_6,
      VAR_7[VAR_12],
      FUNC_2(VAR_10));
  if (VAR_11)
   return VAR_11;
  VAR_12++;
  if (VAR_12 == VAR_5->num_ldg)
   VAR_12 = 0;
 }

 return 0;
}
