
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hdq_data {int mode; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct hdq_data*,int ,int) ;
 int FUNC_2 (struct hdq_data*,int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct hdq_data *VAR_9)
{
 int VAR_10;
 u8 VAR_11;

 FUNC_1(VAR_9, VAR_4,
      VAR_6);






 FUNC_1(VAR_9, VAR_0,
  VAR_1 |
  VAR_2);


 VAR_10 = FUNC_2(VAR_9, VAR_7,
  VAR_8, VAR_3, &VAR_11);
 if (VAR_10)
  FUNC_0(VAR_9->dev, "timeout waiting HDQ reset, %x",
    VAR_11);
 else {
  FUNC_1(VAR_9, VAR_0,
   VAR_1 |
   VAR_2 |
   VAR_9->mode);
  FUNC_1(VAR_9, VAR_4,
   VAR_5);
 }

 return VAR_10;
}
