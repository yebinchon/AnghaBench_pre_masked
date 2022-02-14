
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt7601u_dev {int vendor_req_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct mt7601u_dev*,int) ;
 int FUNC_1 (struct mt7601u_dev*,int ,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

u32 FUNC_4(struct mt7601u_dev *VAR_1, u32 VAR_2, u32 VAR_3, u32 VAR_4)
{
 u32 VAR_5;

 FUNC_2(&VAR_1->vendor_req_mutex);
 VAR_5 = FUNC_0(VAR_1, VAR_2);
 VAR_4 |= VAR_5 & ~VAR_3;
 if (VAR_5 != VAR_4)
  FUNC_1(VAR_1, VAR_0,
        VAR_2, VAR_4);
 FUNC_3(&VAR_1->vendor_req_mutex);

 return VAR_4;
}
