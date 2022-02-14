
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {int dummy; } ;
struct napi_struct {int dummy; } ;


 scalar_t__ FUNC_0 (struct napi_struct*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct virtqueue*) ;
 int FUNC_3 (struct virtqueue*) ;
 int FUNC_4 (struct napi_struct*,struct virtqueue*) ;
 int FUNC_5 (struct virtqueue*,int) ;

__attribute__((used)) static void FUNC_6(struct napi_struct *VAR_0,
        struct virtqueue *VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_3(VAR_1);
 if (FUNC_0(VAR_0, VAR_2)) {
  if (FUNC_1(FUNC_5(VAR_1, VAR_3)))
   FUNC_4(VAR_0, VAR_1);
 } else {
  FUNC_2(VAR_1);
 }
}
