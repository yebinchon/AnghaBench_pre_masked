
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ad2s1210_state {int lock; int resolution; } ;
typedef int ssize_t ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ad2s1210_state*,unsigned char) ;
 int FUNC_1 (struct ad2s1210_state*,unsigned char) ;
 int * VAR_6 ;
 int FUNC_2 (struct ad2s1210_state*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*) ;
 struct ad2s1210_state* FUNC_5 (int ) ;
 int FUNC_6 (char const*,int,unsigned char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_7,
      struct device_attribute *VAR_8,
      const char *VAR_9, size_t VAR_10)
{
 struct ad2s1210_state *VAR_11 = FUNC_5(FUNC_4(VAR_7));
 unsigned char VAR_12;
 unsigned char VAR_13;
 int VAR_14;

 VAR_14 = FUNC_6(VAR_9, 10, &VAR_13);
 if (VAR_14 || VAR_13 < 10 || VAR_13 > 16) {
  FUNC_3(VAR_7, "ad2s1210: resolution out of range\n");
  return -VAR_4;
 }
 FUNC_7(&VAR_11->lock);
 VAR_14 = FUNC_0(VAR_11, VAR_2);
 if (VAR_14 < 0)
  goto error_ret;
 VAR_12 = VAR_14;
 VAR_12 &= ~VAR_3;
 VAR_12 |= (VAR_13 - 10) >> 1;
 VAR_14 = FUNC_1(VAR_11, VAR_2);
 if (VAR_14 < 0)
  goto error_ret;
 VAR_14 = FUNC_1(VAR_11, VAR_12 & VAR_1);
 if (VAR_14 < 0)
  goto error_ret;
 VAR_14 = FUNC_0(VAR_11, VAR_2);
 if (VAR_14 < 0)
  goto error_ret;
 VAR_12 = VAR_14;
 if (VAR_12 & VAR_0) {
  VAR_14 = -VAR_5;
  FUNC_3(VAR_7, "ad2s1210: setting resolution fail\n");
  goto error_ret;
 }
 VAR_11->resolution =
  VAR_6[VAR_12 & VAR_3];
 FUNC_2(VAR_11);
 VAR_14 = VAR_10;
error_ret:
 FUNC_8(&VAR_11->lock);
 return VAR_14;
}
