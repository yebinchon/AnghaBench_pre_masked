
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct soc_sensor_entry {scalar_t__ locked; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,int ,int*) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct soc_sensor_entry *VAR_10,
    int VAR_11, int VAR_12)
{
 u32 VAR_13;
 u32 VAR_14;
 u32 VAR_15;
 int VAR_16;

 FUNC_2(&VAR_9);
 if (VAR_10->locked) {
  VAR_16 = -VAR_0;
  goto failed;
 }

 VAR_16 = FUNC_0(VAR_8, VAR_1,
       VAR_4, &VAR_15);
 if (VAR_16)
  goto failed;







 if (VAR_12 > VAR_5)
  VAR_12 = VAR_5;







 VAR_14 = VAR_12 + VAR_7;
 VAR_13 = (VAR_15 & ~(VAR_3 <<
  (VAR_11 * VAR_6)));
 VAR_13 |= (VAR_14 & VAR_3) <<
  (VAR_11 * VAR_6);

 VAR_16 = FUNC_1(VAR_8, VAR_2,
        VAR_4, VAR_13);

failed:
 FUNC_3(&VAR_9);
 return VAR_16;
}
