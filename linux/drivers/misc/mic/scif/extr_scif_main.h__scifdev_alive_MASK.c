
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scif_peer_dev {int dummy; } ;
struct scif_dev {int spdev; } ;


 struct scif_peer_dev* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static inline int FUNC_3(struct scif_dev *VAR_0)
{
 struct scif_peer_dev *VAR_1;

 FUNC_1();
 VAR_1 = FUNC_0(VAR_0->spdev);
 FUNC_2();
 return !!VAR_1;
}
