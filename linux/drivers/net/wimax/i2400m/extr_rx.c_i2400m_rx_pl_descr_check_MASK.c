
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2400m_pld {int dummy; } ;
struct i2400m {size_t bus_pl_size_max; } ;
struct device {int dummy; } ;
typedef enum i2400m_pt { ____Placeholder_i2400m_pt } i2400m_pt ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int,...) ;
 struct device* FUNC_1 (struct i2400m*) ;
 size_t FUNC_2 (struct i2400m_pld const*) ;
 int FUNC_3 (struct i2400m_pld const*) ;

__attribute__((used)) static
int FUNC_4(struct i2400m *VAR_2,
         const struct i2400m_pld *VAR_3,
         size_t VAR_4, size_t VAR_5)
{
 int VAR_6 = -VAR_0;
 struct device *VAR_7 = FUNC_1(VAR_2);
 size_t VAR_8 = FUNC_2(VAR_3);
 enum i2400m_pt VAR_9 = FUNC_3(VAR_3);

 if (VAR_8 > VAR_2->bus_pl_size_max) {
  FUNC_0(VAR_7, "RX: HW BUG? payload @%zu: size %zu is "
   "bigger than maximum %zu; ignoring message\n",
   VAR_4, VAR_8, VAR_2->bus_pl_size_max);
  goto error;
 }
 if (VAR_4 + VAR_8 > VAR_5) {
  FUNC_0(VAR_7, "RX: HW BUG? payload @%zu: size %zu "
   "goes beyond the received buffer "
   "size (%zu bytes); ignoring message\n",
   VAR_4, VAR_8, VAR_5);
  goto error;
 }
 if (VAR_9 >= VAR_1) {
  FUNC_0(VAR_7, "RX: HW BUG? illegal payload type %u; "
   "ignoring message\n", VAR_9);
  goto error;
 }
 VAR_6 = 0;
error:
 return VAR_6;
}
