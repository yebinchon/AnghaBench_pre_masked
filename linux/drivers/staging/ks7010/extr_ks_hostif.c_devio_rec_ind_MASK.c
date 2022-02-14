
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ks_wlan_private {unsigned char** dev_data; unsigned int* dev_size; int dev_read_lock; int devread_wait; int rec_count; int event_count; int is_device_open; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ks_wlan_private *VAR_1, unsigned char *VAR_2,
     unsigned int VAR_3)
{
 if (!VAR_1->is_device_open)
  return;

 FUNC_3(&VAR_1->dev_read_lock);
 VAR_1->dev_data[FUNC_1(&VAR_1->rec_count)] = VAR_2;
 VAR_1->dev_size[FUNC_1(&VAR_1->rec_count)] = VAR_3;

 if (FUNC_1(&VAR_1->event_count) != VAR_0) {

  FUNC_0(&VAR_1->event_count);
 }
 FUNC_0(&VAR_1->rec_count);
 if (FUNC_1(&VAR_1->rec_count) == VAR_0)
  FUNC_2(&VAR_1->rec_count, 0);

 FUNC_5(&VAR_1->devread_wait);

 FUNC_4(&VAR_1->dev_read_lock);
}
