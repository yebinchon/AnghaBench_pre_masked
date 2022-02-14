
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scif_peer_dev {int dev; } ;
struct scif_dev {int spdev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct device* FUNC_0 (int ) ;
 struct device* FUNC_1 (int *) ;
 struct scif_peer_dev* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static inline struct device *FUNC_5(struct scif_dev *VAR_1)
{
 struct scif_peer_dev *VAR_2;
 struct device *VAR_3;

 FUNC_3();
 VAR_2 = FUNC_2(VAR_1->spdev);
 if (VAR_2)
  VAR_3 = FUNC_1(&VAR_2->dev);
 else
  VAR_3 = FUNC_0(-VAR_0);
 FUNC_4();
 return VAR_3;
}
