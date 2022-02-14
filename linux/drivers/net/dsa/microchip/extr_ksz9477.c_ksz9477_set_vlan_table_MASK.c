
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
typedef size_t u16 ;
struct ksz_device {int vlan_mutex; TYPE_1__* vlan_cache; int dev; } ;
struct TYPE_2__ {void** table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ksz_device*) ;
 int FUNC_2 (struct ksz_device*,int ,size_t) ;
 int FUNC_3 (struct ksz_device*,int ,void*) ;
 int FUNC_4 (struct ksz_device*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct ksz_device *VAR_8, u16 VAR_9,
      u32 *VAR_10)
{
 int VAR_11;

 FUNC_5(&VAR_8->vlan_mutex);

 FUNC_3(VAR_8, VAR_4, VAR_10[0]);
 FUNC_3(VAR_8, VAR_3, VAR_10[1]);
 FUNC_3(VAR_8, VAR_2, VAR_10[2]);

 FUNC_2(VAR_8, VAR_1, VAR_9 & VAR_5);
 FUNC_4(VAR_8, VAR_0, VAR_6 | VAR_7);


 VAR_11 = FUNC_1(VAR_8);
 if (VAR_11) {
  FUNC_0(VAR_8->dev, "Failed to write vlan table\n");
  goto exit;
 }

 FUNC_4(VAR_8, VAR_0, 0);


 VAR_8->vlan_cache[VAR_9].table[0] = VAR_10[0];
 VAR_8->vlan_cache[VAR_9].table[1] = VAR_10[1];
 VAR_8->vlan_cache[VAR_9].table[2] = VAR_10[2];

exit:
 FUNC_6(&VAR_8->vlan_mutex);

 return VAR_11;
}
