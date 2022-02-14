
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct s2255_dev {int udev; } ;
typedef int s32 ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int ,int ) ;
 int FUNC_2 (unsigned char*,void*,int ) ;
 int FUNC_3 (int ,int ,unsigned char,int,int ,int ,unsigned char*,int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static long FUNC_6(struct s2255_dev *VAR_6, unsigned char VAR_7,
        u16 VAR_8, u16 VAR_9, void *VAR_10,
        s32 VAR_11, int VAR_12)
{
 int VAR_13;
 unsigned char *VAR_14;

 VAR_14 = FUNC_1(VAR_11, VAR_1);
 if (!VAR_14)
  return -VAR_0;

 if (!VAR_12) {
  VAR_13 = FUNC_3(VAR_6->udev, FUNC_4(VAR_6->udev, 0),
        VAR_7,
        VAR_5 | VAR_4 |
        VAR_3,
        VAR_9, VAR_8, VAR_14,
        VAR_11, VAR_2 * 5);

  if (VAR_13 >= 0)
   FUNC_2(VAR_10, VAR_14, VAR_11);
 } else {
  FUNC_2(VAR_14, VAR_10, VAR_11);
  VAR_13 = FUNC_3(VAR_6->udev, FUNC_5(VAR_6->udev, 0),
        VAR_7, VAR_5 | VAR_4,
        VAR_9, VAR_8, VAR_14,
        VAR_11, VAR_2 * 5);
 }
 FUNC_0(VAR_14);
 return VAR_13;
}
