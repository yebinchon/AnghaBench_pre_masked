
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kwqe {int kwqe_op_flag; } ;
struct cnic_dev {int netdev; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int FUNC_0 (int ) ;






 int FUNC_1 (struct cnic_dev*,struct kwqe*) ;
 int FUNC_2 (struct cnic_dev*,struct kwqe**,int,int*) ;
 int FUNC_3 (struct cnic_dev*,struct kwqe*) ;
 int FUNC_4 (struct cnic_dev*,struct kwqe*) ;
 int FUNC_5 (struct cnic_dev*,struct kwqe*) ;
 int FUNC_6 (struct cnic_dev*,struct kwqe**,int,int*) ;
 int FUNC_7 (struct cnic_dev*,struct kwqe*) ;
 int FUNC_8 (struct cnic_dev*,struct kwqe*) ;
 int FUNC_9 (struct cnic_dev*,struct kwqe*) ;
 int FUNC_10 (struct cnic_dev*,struct kwqe*) ;
 int FUNC_11 (struct cnic_dev*,struct kwqe*) ;
 int FUNC_12 (int ,char*,int) ;
 int FUNC_13 (int ,int *) ;

__attribute__((used)) static int FUNC_14(struct cnic_dev *VAR_3,
      struct kwqe *VAR_4[], u32 VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 u32 VAR_9;
 struct kwqe *VAR_10;

 if (!FUNC_13(VAR_0, &VAR_3->flags))
  return -VAR_1;

 for (VAR_6 = 0; VAR_6 < VAR_5; ) {
  VAR_10 = VAR_4[VAR_6];
  VAR_9 = FUNC_0(VAR_10->kwqe_op_flag);
  VAR_7 = 1;

  switch (VAR_9) {
  case 137:
   VAR_8 = FUNC_4(VAR_3, VAR_10);
   break;
  case 136:
   VAR_8 = FUNC_5(VAR_3, VAR_10);
   break;
  case 135:
   VAR_8 = FUNC_6(VAR_3, &VAR_4[VAR_6],
           VAR_5 - VAR_6, &VAR_7);
   break;
  case 134:
   VAR_8 = FUNC_7(VAR_3, VAR_10);
   break;
  case 138:
   VAR_8 = FUNC_3(VAR_3, VAR_10);
   break;
  case 132:
   VAR_8 = FUNC_2(VAR_3, &VAR_4[VAR_6], VAR_5 - VAR_6,
       &VAR_7);
   break;
  case 133:
   VAR_8 = FUNC_1(VAR_3, VAR_10);
   break;
  case 130:
   VAR_8 = FUNC_10(VAR_3, VAR_10);
   break;
  case 131:
   VAR_8 = FUNC_9(VAR_3, VAR_10);
   break;
  case 129:
   VAR_8 = FUNC_11(VAR_3, VAR_10);
   break;
  case 128:
   VAR_8 = 0;
   break;
  default:
   VAR_8 = 0;
   FUNC_12(VAR_3->netdev, "Unknown type of KWQE(0x%x)\n",
       VAR_9);
   break;
  }
  if (VAR_8 < 0) {
   FUNC_12(VAR_3->netdev, "KWQE(0x%x) failed\n",
       VAR_9);





   if (VAR_8 == -VAR_2 || VAR_8 == -VAR_1)
    FUNC_8(VAR_3, VAR_10);
  }
  VAR_6 += VAR_7;
 }
 return 0;
}
