
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct bnxt_en_dev {int pdev; struct net_device* net; int flags; int * en_ops; } ;
struct bnxt {int flags; struct bnxt_en_dev* edev; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct bnxt_en_dev* FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 struct bnxt_en_dev* FUNC_1 (int,int ) ;
 struct bnxt* FUNC_2 (struct net_device*) ;

struct bnxt_en_dev *FUNC_3(struct net_device *VAR_7)
{
 struct bnxt *VAR_8 = FUNC_2(VAR_7);
 struct bnxt_en_dev *VAR_9;

 VAR_9 = VAR_8->edev;
 if (!VAR_9) {
  VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_5);
  if (!VAR_9)
   return FUNC_0(-VAR_4);
  VAR_9->en_ops = &VAR_6;
  if (VAR_8->flags & VAR_2)
   VAR_9->flags |= VAR_0;
  if (VAR_8->flags & VAR_3)
   VAR_9->flags |= VAR_1;
  VAR_9->net = VAR_7;
  VAR_9->pdev = VAR_8->pdev;
  VAR_8->edev = VAR_9;
 }
 return VAR_8->edev;
}
