
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned char u8 ;
struct lis3lv02d {unsigned char irq_cfg; scalar_t__ whoami; int* data_ready_count; scalar_t__ (* read_data ) (struct lis3lv02d*,int ) ;int mutex; TYPE_1__* pdata; int (* write ) (struct lis3lv02d*,unsigned char,unsigned char) ;int wake_thread; int (* read ) (struct lis3lv02d*,unsigned char,unsigned char*) ;} ;
typedef scalar_t__ s16 ;
struct TYPE_2__ {scalar_t__* st_min_limits; scalar_t__* st_max_limits; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct lis3lv02d*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct lis3lv02d*,unsigned char,unsigned char*) ;
 scalar_t__ FUNC_6 (struct lis3lv02d*,int ) ;
 scalar_t__ FUNC_7 (struct lis3lv02d*,int ) ;
 int FUNC_8 (struct lis3lv02d*,unsigned char,unsigned char) ;
 int FUNC_9 (struct lis3lv02d*,unsigned char,unsigned char) ;
 int FUNC_10 (struct lis3lv02d*,unsigned char,unsigned char*) ;
 int FUNC_11 (struct lis3lv02d*,unsigned char,unsigned char) ;
 scalar_t__ FUNC_12 (struct lis3lv02d*,int ) ;
 scalar_t__ FUNC_13 (struct lis3lv02d*,int ) ;
 scalar_t__ FUNC_14 (struct lis3lv02d*,int ) ;
 int FUNC_15 (struct lis3lv02d*,unsigned char,unsigned char) ;
 scalar_t__ FUNC_16 (struct lis3lv02d*,int ) ;

__attribute__((used)) static int FUNC_17(struct lis3lv02d *VAR_21, s16 VAR_22[3])
{
 u8 VAR_23, VAR_24;
 s16 VAR_25, VAR_26, VAR_27;
 u8 VAR_28;
 int VAR_29;
 u8 VAR_30;
 unsigned char VAR_31;

 FUNC_3(&VAR_21->mutex);

 VAR_31 = VAR_21->irq_cfg;
 if (VAR_21->whoami == VAR_20) {
  VAR_21->data_ready_count[VAR_6] = 0;
  VAR_21->data_ready_count[VAR_7] = 0;


  FUNC_1(&VAR_21->wake_thread);
  VAR_21->irq_cfg = VAR_8 | VAR_10;
  VAR_21->read(VAR_21, VAR_4, &VAR_30);
  VAR_21->write(VAR_21, VAR_4, (VAR_30 &
    ~(VAR_9 | VAR_11)) |
    (VAR_8 | VAR_10));
 }

 if ((VAR_21->whoami == VAR_18) || (VAR_21->whoami == VAR_19)) {
  VAR_23 = VAR_5;
  VAR_28 = VAR_2;
 } else {
  VAR_23 = VAR_3;
  if (VAR_21->whoami == VAR_17)
   VAR_28 = VAR_0;
  else
   VAR_28 = VAR_1;
 }

 VAR_21->read(VAR_21, VAR_23, &VAR_24);
 VAR_21->write(VAR_21, VAR_23, (VAR_24 | VAR_28));
 VAR_29 = FUNC_2(VAR_21);
 if (VAR_29)
  goto fail;


 VAR_25 = VAR_21->read_data(VAR_21, VAR_12);
 VAR_26 = VAR_21->read_data(VAR_21, VAR_13);
 VAR_27 = VAR_21->read_data(VAR_21, VAR_14);


 VAR_21->write(VAR_21, VAR_23, VAR_24);
 VAR_29 = FUNC_2(VAR_21);
 if (VAR_29)
  goto fail;

 VAR_22[0] = VAR_25 - VAR_21->read_data(VAR_21, VAR_12);
 VAR_22[1] = VAR_26 - VAR_21->read_data(VAR_21, VAR_13);
 VAR_22[2] = VAR_27 - VAR_21->read_data(VAR_21, VAR_14);

 VAR_29 = 0;

 if (VAR_21->whoami == VAR_20) {

  FUNC_0(&VAR_21->wake_thread);
  VAR_21->write(VAR_21, VAR_4, VAR_30);
  VAR_21->irq_cfg = VAR_31;

  if ((VAR_31 & VAR_9) &&
   VAR_21->data_ready_count[VAR_6] < 2) {
   VAR_29 = VAR_16;
   goto fail;
  }

  if ((VAR_31 & VAR_11) &&
   VAR_21->data_ready_count[VAR_7] < 2) {
   VAR_29 = VAR_16;
   goto fail;
  }
 }

 if (VAR_21->pdata) {
  int VAR_32;
  for (VAR_32 = 0; VAR_32 < 3; VAR_32++) {

   if ((VAR_22[VAR_32] < VAR_21->pdata->st_min_limits[VAR_32]) ||
       (VAR_22[VAR_32] > VAR_21->pdata->st_max_limits[VAR_32])) {
    VAR_29 = VAR_15;
    goto fail;
   }
  }
 }


fail:
 FUNC_4(&VAR_21->mutex);
 return VAR_29;
}
