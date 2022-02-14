
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct r8152 {int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (void*,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,void*,int ,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static
int FUNC_4(struct r8152 *VAR_4, u16 VAR_5, u16 VAR_6, u16 VAR_7, void *VAR_8)
{
 int VAR_9;
 void *VAR_10;

 VAR_10 = FUNC_1(VAR_8, VAR_7, VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_9 = FUNC_2(VAR_4->udev, FUNC_3(VAR_4->udev, 0),
         VAR_3, VAR_2,
         VAR_5, VAR_6, VAR_10, VAR_7, 500);

 FUNC_0(VAR_10);

 return VAR_9;
}
