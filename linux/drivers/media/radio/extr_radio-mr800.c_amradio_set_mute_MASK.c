
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amradio_device {int muted; } ;


 int VAR_0 ;
 int FUNC_0 (struct amradio_device*,int ,int,int *,int ,int) ;

__attribute__((used)) static int FUNC_1(struct amradio_device *VAR_1, bool VAR_2)
{
 int VAR_3 = FUNC_0(VAR_1,
   VAR_0, VAR_2, ((void*)0), 0, 0);

 if (!VAR_3)
  VAR_1->muted = VAR_2;
 return VAR_3;
}
