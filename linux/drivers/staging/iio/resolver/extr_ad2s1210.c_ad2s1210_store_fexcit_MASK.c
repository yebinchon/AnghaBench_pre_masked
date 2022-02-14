
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ad2s1210_state {unsigned int fexcit; int lock; } ;
typedef int ssize_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ad2s1210_state*) ;
 int FUNC_1 (struct ad2s1210_state*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*) ;
 struct ad2s1210_state* FUNC_4 (int ) ;
 int FUNC_5 (char const*,int,unsigned int*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_3,
         struct device_attribute *VAR_4,
         const char *VAR_5, size_t VAR_6)
{
 struct ad2s1210_state *VAR_7 = FUNC_4(FUNC_3(VAR_3));
 unsigned int VAR_8;
 int VAR_9;

 VAR_9 = FUNC_5(VAR_5, 10, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;
 if (VAR_8 < VAR_1 || VAR_8 > VAR_0) {
  FUNC_2(VAR_3,
   "ad2s1210: excitation frequency out of range\n");
  return -VAR_2;
 }
 FUNC_6(&VAR_7->lock);
 VAR_7->fexcit = VAR_8;
 VAR_9 = FUNC_1(VAR_7);
 if (VAR_9 < 0)
  goto error_ret;
 VAR_9 = FUNC_0(VAR_7);
error_ret:
 FUNC_7(&VAR_7->lock);

 return VAR_9 < 0 ? VAR_9 : VAR_6;
}
