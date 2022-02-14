
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp_device {scalar_t__ revision; scalar_t__ autoidle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct isp_device*,int,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct isp_device *VAR_10, int VAR_11)
{
 FUNC_0(VAR_10,
         ((VAR_11 ? VAR_8 :
    VAR_6) <<
   VAR_7) |
   ((VAR_10->revision == VAR_3) ?
     VAR_5 : 0),
         VAR_9, VAR_4);

 FUNC_0(VAR_10,
         (VAR_10->autoidle ? VAR_0 : 0) |
         VAR_1,
         VAR_9, VAR_2);
}
