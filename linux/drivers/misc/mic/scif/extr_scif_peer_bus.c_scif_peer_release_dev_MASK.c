
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scif_peer_dev {size_t dnode; } ;
struct scif_dev {int dummy; } ;
struct device {int dummy; } ;


 struct scif_peer_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (struct scif_peer_dev*) ;
 int FUNC_2 (struct scif_dev*) ;
 struct scif_dev* VAR_0 ;

__attribute__((used)) static void FUNC_3(struct device *VAR_1)
{
 struct scif_peer_dev *VAR_2 = FUNC_0(VAR_1);
 struct scif_dev *VAR_3 = &VAR_0[VAR_2->dnode];

 FUNC_2(VAR_3);
 FUNC_1(VAR_2);
}
