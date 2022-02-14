
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00_dev {int rssi_offset; int cap_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct rt2x00_dev*) ;
 int FUNC_2 (struct rt2x00_dev*) ;
 int FUNC_3 (struct rt2x00_dev*) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (struct rt2x00_dev*,int ) ;
 int FUNC_6 (struct rt2x00_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct rt2x00_dev *VAR_6)
{
 int VAR_7;
 u32 VAR_8;




 VAR_7 = FUNC_3(VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_6);
 if (VAR_7)
  return VAR_7;





 VAR_8 = FUNC_5(VAR_6, VAR_1);
 FUNC_4(&VAR_8, VAR_2, 1);
 FUNC_6(VAR_6, VAR_1, VAR_8);




 VAR_7 = FUNC_2(VAR_6);
 if (VAR_7)
  return VAR_7;




 FUNC_0(VAR_3, &VAR_6->cap_flags);
 FUNC_0(VAR_4, &VAR_6->cap_flags);
 FUNC_0(VAR_5, &VAR_6->cap_flags);




 VAR_6->rssi_offset = VAR_0;

 return 0;
}
