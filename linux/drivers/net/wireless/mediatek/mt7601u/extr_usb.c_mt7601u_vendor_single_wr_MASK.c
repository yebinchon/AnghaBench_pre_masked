
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct mt7601u_dev {int vendor_req_mutex; } ;


 int FUNC_0 (struct mt7601u_dev*,int const,int const,int const) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct mt7601u_dev *VAR_0, const u8 VAR_1,
        const u16 VAR_2, const u32 VAR_3)
{
 int VAR_4;

 FUNC_1(&VAR_0->vendor_req_mutex);
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_2(&VAR_0->vendor_req_mutex);

 return VAR_4;
}
