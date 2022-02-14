
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nicvf {int netdev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct nicvf*,int) ;
 int FUNC_2 (struct nicvf*,int) ;

__attribute__((used)) static int FUNC_3(struct nicvf *VAR_0)
{
 int VAR_1;


 FUNC_2(VAR_0, 1);


 VAR_1 = FUNC_1(VAR_0, 1);
 if (VAR_1) {
  FUNC_0(VAR_0->netdev,
      "Failed to alloc/config VF's QSet resources\n");
  return VAR_1;
 }

 return 0;
}
