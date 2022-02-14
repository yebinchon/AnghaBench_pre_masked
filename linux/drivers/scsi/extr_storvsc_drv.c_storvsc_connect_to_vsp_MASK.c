
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vmstorage_channel_properties {int dummy; } ;
struct hv_device {int channel; } ;


 int FUNC_0 (struct vmstorage_channel_properties*,int ,int) ;
 int FUNC_1 (struct hv_device*,int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int ,void*,int,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct hv_device *VAR_1, u32 VAR_2,
      bool VAR_3)
{
 struct vmstorage_channel_properties VAR_4;
 int VAR_5;

 FUNC_0(&VAR_4, 0, sizeof(struct vmstorage_channel_properties));

 VAR_5 = FUNC_2(VAR_1->channel,
    VAR_2,
    VAR_2,
    (void *)&VAR_4,
    sizeof(struct vmstorage_channel_properties),
    VAR_0, VAR_1->channel);

 if (VAR_5 != 0)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_3);

 return VAR_5;
}
