
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tle62x0_state {unsigned char* rx_buff; int nr_gpio; int lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 char* FUNC_0 (unsigned long) ;
 int FUNC_1 (struct device*,char*,int,...) ;
 struct tle62x0_state* FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,char*) ;
 int FUNC_6 (struct tle62x0_state*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_0,
  struct device_attribute *VAR_1, char *VAR_2)
{
 struct tle62x0_state *VAR_3 = FUNC_2(VAR_0);
 char *VAR_4 = VAR_2;
 unsigned char *VAR_5 = VAR_3->rx_buff;
 unsigned long VAR_6 = 0;
 int VAR_7;
 int VAR_8;

 FUNC_3(&VAR_3->lock);
 VAR_8 = FUNC_6(VAR_3);
 FUNC_1(VAR_0, "tle62x0_read() returned %d\n", VAR_8);
 if (VAR_8 < 0) {
  FUNC_4(&VAR_3->lock);
  return VAR_8;
 }

 for (VAR_7 = 0; VAR_7 < (VAR_3->nr_gpio * 2)/8; VAR_7 += 1) {
  VAR_6 <<= 8;
  VAR_6 |= ((unsigned long)VAR_5[VAR_7]);

  FUNC_1(VAR_0, "byte %d is %02x\n", VAR_7, VAR_5[VAR_7]);
 }

 for (VAR_7 = 0; VAR_7 < VAR_3->nr_gpio; VAR_7++) {
  VAR_4 += FUNC_5(VAR_4, "%s ", FUNC_0(VAR_6 >> (VAR_7 * 2)));
 }

 *VAR_4++ = '\n';

 FUNC_4(&VAR_3->lock);
 return VAR_4 - VAR_2;
}
