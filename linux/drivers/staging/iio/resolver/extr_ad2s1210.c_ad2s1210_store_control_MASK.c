
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ad2s1210_state {int hysteresis; int lock; int resolution; } ;
typedef int ssize_t ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ad2s1210_state*,unsigned char) ;
 int FUNC_1 (struct ad2s1210_state*,unsigned char) ;
 int * VAR_7 ;
 int FUNC_2 (struct ad2s1210_state*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*) ;
 struct ad2s1210_state* FUNC_5 (int ) ;
 int FUNC_6 (char const*,int,unsigned char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_8,
          struct device_attribute *VAR_9,
          const char *VAR_10, size_t VAR_11)
{
 struct ad2s1210_state *VAR_12 = FUNC_5(FUNC_4(VAR_8));
 unsigned char VAR_13;
 unsigned char VAR_14;
 int VAR_15;

 VAR_15 = FUNC_6(VAR_10, 16, &VAR_13);
 if (VAR_15)
  return -VAR_5;

 FUNC_7(&VAR_12->lock);
 VAR_15 = FUNC_1(VAR_12, VAR_3);
 if (VAR_15 < 0)
  goto error_ret;
 VAR_14 = VAR_13 & VAR_2;
 VAR_15 = FUNC_1(VAR_12, VAR_14);
 if (VAR_15 < 0)
  goto error_ret;

 VAR_15 = FUNC_0(VAR_12, VAR_3);
 if (VAR_15 < 0)
  goto error_ret;
 if (VAR_15 & VAR_1) {
  VAR_15 = -VAR_6;
  FUNC_3(VAR_8,
   "ad2s1210: write control register fail\n");
  goto error_ret;
 }
 VAR_12->resolution =
  VAR_7[VAR_14 & VAR_4];
 FUNC_2(VAR_12);
 VAR_15 = VAR_11;
 VAR_12->hysteresis = !!(VAR_14 & VAR_0);

error_ret:
 FUNC_8(&VAR_12->lock);
 return VAR_15;
}
