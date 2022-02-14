
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct velocity_info {int * mib_counter; int lock; } ;
struct net_device_stats {int rx_crc_errors; int collisions; int rx_length_errors; int rx_errors; int rx_packets; } ;
struct net_device {struct net_device_stats stats; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 struct velocity_info* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct velocity_info*) ;

__attribute__((used)) static struct net_device_stats *FUNC_5(struct net_device *VAR_5)
{
 struct velocity_info *VAR_6 = FUNC_0(VAR_5);


 if (!FUNC_1(VAR_5))
  return &VAR_5->stats;

 FUNC_2(&VAR_6->lock);
 FUNC_4(VAR_6);
 FUNC_3(&VAR_6->lock);

 VAR_5->stats.rx_packets = VAR_6->mib_counter[VAR_1];
 VAR_5->stats.rx_errors = VAR_6->mib_counter[VAR_2];
 VAR_5->stats.rx_length_errors = VAR_6->mib_counter[VAR_0];


 VAR_5->stats.collisions = VAR_6->mib_counter[VAR_4];



 VAR_5->stats.rx_crc_errors = VAR_6->mib_counter[VAR_3];







 return &VAR_5->stats;
}
