
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct w1_slave {TYPE_1__* master; struct w1_eprom_data* family_data; } ;
struct w1_eprom_data {int* eprom; int page_present; } ;
struct TYPE_3__ {int bus_mutex; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__,int*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int,int ) ;
 int FUNC_5 (TYPE_1__*,int*,int) ;
 scalar_t__ FUNC_6 (struct w1_slave*) ;
 int FUNC_7 (TYPE_1__*,int*,int) ;

__attribute__((used)) static int FUNC_8(struct w1_slave *VAR_5, int VAR_6)
{
 struct w1_eprom_data *VAR_7 = VAR_5->family_data;
 int VAR_8 = 16;
 int VAR_9, VAR_10;
 int VAR_11 = -VAR_2;
 u8 VAR_12[6];
 u8 VAR_13;
 u16 VAR_14;

 if (FUNC_4(VAR_6, VAR_7->page_present))
  return 0;

 VAR_10 = VAR_9 = VAR_6 * VAR_4;
 FUNC_1(&VAR_5->master->bus_mutex);

retry:
 if (FUNC_6(VAR_5))
  goto err;

 VAR_12[0] = VAR_3;
 VAR_12[1] = VAR_9 & 0xff;
 VAR_12[2] = VAR_9 >> 8;
 FUNC_7(VAR_5->master, VAR_12, 3);
 FUNC_5(VAR_5->master, VAR_12 + 3, 3);
 VAR_13 = VAR_12[3];
 VAR_14 = FUNC_0(VAR_0, VAR_12, 6);

 if (VAR_14 != VAR_1)
  goto err;


 if (VAR_13 != 0xff) {
  VAR_8--;
  if (VAR_8 < 0)
   goto err;

  VAR_9 = (VAR_13 ^ 0xff) * VAR_4;
  goto retry;
 }

 FUNC_5(VAR_5->master, &VAR_7->eprom[VAR_10], VAR_4);
 FUNC_5(VAR_5->master, VAR_12, 2);
 VAR_14 = FUNC_0(VAR_0, &VAR_7->eprom[VAR_10], VAR_4);
 VAR_14 = FUNC_0(VAR_14, VAR_12, 2);

 if (VAR_14 != VAR_1)
  goto err;

 FUNC_3(VAR_6, VAR_7->page_present);
 VAR_11 = 0;
err:
 FUNC_2(&VAR_5->master->bus_mutex);
 return VAR_11;
}
