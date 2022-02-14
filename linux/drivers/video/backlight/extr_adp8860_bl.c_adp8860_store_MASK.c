
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct adp8860_bl {int lock; int client; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,int,unsigned long) ;
 struct adp8860_bl* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0, const char *VAR_1,
    size_t VAR_2, int VAR_3)
{
 struct adp8860_bl *VAR_4 = FUNC_1(VAR_0);
 unsigned long VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_1, 10, &VAR_5);
 if (VAR_6)
  return VAR_6;

 FUNC_3(&VAR_4->lock);
 FUNC_0(VAR_4->client, VAR_3, VAR_5);
 FUNC_4(&VAR_4->lock);

 return VAR_2;
}
