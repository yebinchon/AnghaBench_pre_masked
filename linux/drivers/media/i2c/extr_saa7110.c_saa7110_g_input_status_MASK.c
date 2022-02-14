
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct saa7110 {scalar_t__ norm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct v4l2_subdev*) ;
 struct saa7110* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int,int ,struct v4l2_subdev*,char*,int,unsigned long long) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_3, u32 *VAR_4)
{
 struct saa7110 *VAR_5 = FUNC_1(VAR_3);
 int VAR_6 = VAR_1;
 int VAR_7 = FUNC_0(VAR_3);

 FUNC_2(1, VAR_2, VAR_3, "status=0x%02x norm=%llx\n",
         VAR_7, (unsigned long long)VAR_5->norm);
 if (!(VAR_7 & 0x40))
  VAR_6 = 0;
 if (!(VAR_7 & 0x03))
  VAR_6 |= VAR_0;

 *VAR_4 = VAR_6;
 return 0;
}
