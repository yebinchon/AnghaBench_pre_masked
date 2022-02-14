
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct w1_slave {TYPE_1__* master; struct w1_eprom_data* family_data; } ;
struct w1_eprom_data {scalar_t__* eprom; int page_present; } ;
struct TYPE_4__ {int bus_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (scalar_t__*,int) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,scalar_t__*,int) ;
 scalar_t__ FUNC_7 (struct w1_slave*) ;
 int FUNC_8 (TYPE_1__*,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_9(struct w1_slave *VAR_3, int VAR_4)
{
 struct w1_eprom_data *VAR_5 = VAR_3->family_data;
 int VAR_6 = VAR_4 * VAR_1;
 int VAR_7 = -VAR_0;
 u8 VAR_8[3];
 u8 VAR_9;

 if (FUNC_3(VAR_4, VAR_5->page_present))
  return 0;

 FUNC_0(&VAR_3->master->bus_mutex);

 if (FUNC_7(VAR_3))
  goto err;

 VAR_8[0] = VAR_2;
 VAR_8[1] = VAR_6 & 0xff;
 VAR_8[2] = VAR_6 >> 8;
 FUNC_8(VAR_3->master, VAR_8, 3);

 VAR_9 = FUNC_5(VAR_3->master);
 if (FUNC_4(VAR_8, 3) != VAR_9)
  goto err;

 FUNC_6(VAR_3->master, &VAR_5->eprom[VAR_6], VAR_1);

 VAR_9 = FUNC_5(VAR_3->master);
 if (FUNC_4(&VAR_5->eprom[VAR_6], VAR_1) != VAR_9)
  goto err;

 FUNC_2(VAR_4, VAR_5->page_present);
 VAR_7 = 0;
err:
 FUNC_1(&VAR_3->master->bus_mutex);
 return VAR_7;
}
