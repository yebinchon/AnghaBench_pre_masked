
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct enic {int vdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct enic*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct enic *VAR_3)
{
 int VAR_4;
 u32 VAR_5 = VAR_0;

 VAR_4 = FUNC_1(VAR_3->vdev, VAR_1,
  VAR_2, VAR_5);
 if (VAR_4)
  FUNC_0(FUNC_2(VAR_3), "vNIC device open failed, err %d\n",
   VAR_4);

 return VAR_4;
}
