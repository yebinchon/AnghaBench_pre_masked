
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vstor_packet {scalar_t__ operation; scalar_t__ status; int flags; } ;
struct storvsc_cmd_request {int wait_event; struct vstor_packet vstor_packet; } ;
struct hv_device {int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct vstor_packet*,scalar_t__,unsigned long,int ,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(struct hv_device *VAR_8,
        struct storvsc_cmd_request *VAR_9,
        bool VAR_10)
{
 struct vstor_packet *VAR_11;
 int VAR_12, VAR_13;

 VAR_11 = &VAR_9->vstor_packet;

 FUNC_0(&VAR_9->wait_event);
 VAR_11->flags = VAR_3;

 VAR_12 = FUNC_1(VAR_8->channel, VAR_11,
          (sizeof(struct vstor_packet) -
          VAR_7),
          (unsigned long)VAR_9,
          VAR_5,
          VAR_4);
 if (VAR_12 != 0)
  return VAR_12;

 VAR_13 = FUNC_2(&VAR_9->wait_event, 5*VAR_2);
 if (VAR_13 == 0)
  return -VAR_1;

 if (!VAR_10)
  return VAR_12;

 if (VAR_11->operation != VAR_6 ||
     VAR_11->status != 0)
  return -VAR_0;

 return VAR_12;
}
