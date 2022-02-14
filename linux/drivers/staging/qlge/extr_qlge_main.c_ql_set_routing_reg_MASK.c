
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ql_adapter {int ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;

 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

 int VAR_12 ;

 int VAR_13 ;


 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

 int VAR_17 ;
 int VAR_18 ;

 int VAR_19 ;

 int VAR_20 ;
 int FUNC_0 (struct ql_adapter*,int ,int ,char*,int) ;
 int FUNC_1 (struct ql_adapter*,int ,int ,int ) ;
 int FUNC_2 (struct ql_adapter*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct ql_adapter *VAR_21, u32 VAR_22, u32 VAR_23,
         int VAR_24)
{
 int VAR_25 = -VAR_0;
 u32 VAR_26 = 0;

 switch (VAR_23) {
 case 135:
  {
   VAR_26 = VAR_8 |
       VAR_19 |
       (VAR_7 << VAR_12);
   break;
  }
 case 128:
  {
   VAR_26 = VAR_9 |
       VAR_19 |
       (VAR_16 << VAR_12);
   break;
  }
 case 134:
  {
   VAR_26 = VAR_9 |
       VAR_19 |
       (VAR_5 << VAR_12);
   break;
  }
 case 133:
  {
   VAR_26 = VAR_9 |
    VAR_19 |
    (VAR_13 <<
    VAR_12);
   break;
  }
 case 129:
  {
   VAR_26 = VAR_9 |
    VAR_19 |
    (VAR_18 <<
    VAR_12);
   break;
  }
 case 136:
  {
   VAR_26 = VAR_9 |
       VAR_19 |
       (VAR_6 << VAR_12);
   break;
  }
 case 132:
  {
   VAR_26 = VAR_9 |
       VAR_19 |
       (VAR_4 << VAR_12);
   break;
  }
 case 131:
  {
   VAR_26 = VAR_9 |
       VAR_19 |
       (VAR_14 << VAR_12);
   break;
  }
 case 130:
  {
   VAR_26 = VAR_10 |
       VAR_19 |
       (VAR_17 << VAR_12);
   break;
  }
 case 0:
  {
   VAR_26 = VAR_9 |
       VAR_19 |
       (VAR_22 << VAR_12);
   break;
  }
 default:
  FUNC_0(VAR_21, VAR_20, VAR_21->ndev,
     "Mask type %d not yet supported.\n", VAR_23);
  VAR_25 = -VAR_1;
  goto exit;
 }

 if (VAR_26) {
  VAR_25 = FUNC_1(VAR_21, VAR_3, VAR_15, 0);
  if (VAR_25)
   goto exit;
  VAR_26 |= (VAR_24 ? VAR_11 : 0);
  FUNC_2(VAR_21, VAR_3, VAR_26);
  FUNC_2(VAR_21, VAR_2, VAR_24 ? VAR_23 : 0);
 }
exit:
 return VAR_25;
}
