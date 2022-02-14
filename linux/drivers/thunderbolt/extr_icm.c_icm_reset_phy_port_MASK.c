
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tb {int dummy; } ;
struct icm {int upstream_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct icm*,int ,int,int ,int*) ;
 int FUNC_1 (struct icm*,int ,int,int ,int) ;
 struct icm* FUNC_2 (struct tb*) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct tb *VAR_6, int VAR_7)
{
 struct icm *VAR_8 = FUNC_2(VAR_6);
 u32 VAR_9, VAR_10;
 int VAR_11, VAR_12;
 u32 VAR_13, VAR_14;
 int VAR_15;

 if (!VAR_8->upstream_port)
  return 0;

 if (VAR_7) {
  VAR_11 = 3;
  VAR_12 = 4;
 } else {
  VAR_11 = 1;
  VAR_12 = 2;
 }





 VAR_15 = FUNC_0(VAR_8, VAR_4, VAR_11, VAR_0, &VAR_13);
 if (VAR_15)
  return VAR_15;
 VAR_15 = FUNC_0(VAR_8, VAR_4, VAR_12, VAR_0, &VAR_14);
 if (VAR_15)
  return VAR_15;

 VAR_9 = VAR_13 & VAR_2;
 VAR_9 >>= VAR_3;
 VAR_10 = VAR_14 & VAR_2;
 VAR_10 >>= VAR_3;


 if (VAR_9 != VAR_5 || VAR_10 != VAR_5)
  return 0;

 VAR_13 |= VAR_1;
 VAR_15 = FUNC_1(VAR_8, VAR_4, VAR_11, VAR_0, VAR_13);
 if (VAR_15)
  return VAR_15;

 VAR_14 |= VAR_1;
 VAR_15 = FUNC_1(VAR_8, VAR_4, VAR_12, VAR_0, VAR_14);
 if (VAR_15)
  return VAR_15;


 FUNC_3(10, 100);

 VAR_15 = FUNC_0(VAR_8, VAR_4, VAR_11, VAR_0, &VAR_13);
 if (VAR_15)
  return VAR_15;
 VAR_15 = FUNC_0(VAR_8, VAR_4, VAR_12, VAR_0, &VAR_14);
 if (VAR_15)
  return VAR_15;

 VAR_13 &= ~VAR_1;
 VAR_15 = FUNC_1(VAR_8, VAR_4, VAR_11, VAR_0, VAR_13);
 if (VAR_15)
  return VAR_15;

 VAR_14 &= ~VAR_1;
 return FUNC_1(VAR_8, VAR_4, VAR_12, VAR_0, VAR_14);
}
