
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ushort ;
typedef scalar_t__ uchar ;
struct TYPE_3__ {scalar_t__ max_total_qng; int iop_base; } ;
typedef int PortAddr ;
typedef TYPE_1__ ASC_DVC_VAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int,scalar_t__) ;
 int FUNC_6 (int ,int,int ) ;

__attribute__((used)) static void FUNC_7(ASC_DVC_VAR *VAR_9)
{
 PortAddr VAR_10;
 int VAR_11;
 ushort VAR_12;

 VAR_10 = VAR_9->iop_base;
 FUNC_2(VAR_10, 1);
 FUNC_1(VAR_10, VAR_9->max_total_qng);
 FUNC_4(VAR_10, 1);
 FUNC_3(VAR_10, VAR_9->max_total_qng);
 FUNC_5(VAR_10, VAR_1,
    (uchar)((int)VAR_9->max_total_qng + 1));
 FUNC_5(VAR_10, VAR_2,
    (uchar)((int)VAR_9->max_total_qng + 2));
 FUNC_5(VAR_10, (ushort)VAR_6,
    VAR_9->max_total_qng);
 FUNC_6(VAR_10, VAR_0, 0);
 FUNC_6(VAR_10, VAR_3, 0);
 FUNC_5(VAR_10, VAR_5, 0);
 FUNC_5(VAR_10, VAR_4, 0);
 FUNC_5(VAR_10, VAR_7, 0);
 FUNC_0(VAR_10, 0);
 VAR_12 = VAR_8;
 for (VAR_11 = 0; VAR_11 < 32; VAR_11++, VAR_12 += 2) {
  FUNC_6(VAR_10, VAR_12, 0);
 }
}
